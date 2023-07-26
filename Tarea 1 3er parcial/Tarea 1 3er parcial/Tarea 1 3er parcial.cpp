#pragma once

#include <iostream>
#include <stack>

template<typename T>
class BinaryTree
{
private:
    template <typename U>
    struct Node
    {
    public:
        Node(U in_data, Node<U>* in_parent, Node<U>* in_left = nullptr, Node<U>* in_right = nullptr) :
            data(in_data), parent(in_parent), left(in_left), right(in_right)
        {
        }

        ~Node()
        {
        }

        U data;
        Node<U>* parent;
        Node<U>* left;
        Node<U>* right;
    };

    Node<T>* root; 

public:
    BinaryTree() : root(nullptr)
    {
    }


    ~BinaryTree()
    {
        while (root != nullptr)
        {
            DeleteNode(root);
        }
    }

    // Función que devuelve el puntero al nodo raíz del árbol.
    Node<T>* GetRoot()
    {
        return root;
    }

    // Función auxiliar para encontrar el nodo con el valor mínimo a partir de un nodo dado.
    Node<T>* MinimumFromNode(Node<T>* in_root)
    {
        Node<T>* temp = in_root;
        while (temp->left != nullptr)
        {
            temp = temp->left;
        }
        return temp;
    }

    // Función que devuelve el nodo con el valor mínimo en el árbol.
    Node<T>* Minimum()
    {
        return MinimumFromNode(root);
    }

    // Función que devuelve el valor mínimo en el árbol.
    T MinimumValue()
    {
        Node<T>* temp = Minimum();
        if (temp != nullptr)
        {
            return temp->data;
        }
    }

    // Función auxiliar para encontrar el nodo con el valor máximo a partir de un nodo dado.
    Node<T>* MaximumFromNode(Node<T>* in_root)
    {
        Node<T>* temp = in_root;
        while (temp->right != nullptr)
        {
            temp = temp->right;
        }
        return temp;
    }

    // Función que devuelve el nodo con el valor máximo en el árbol.
    Node<T>* Maximum()
    {
        return MaximumFromNode(root);
    }

    // Función que devuelve el valor máximo en el árbol.
    T MaximumValue()
    {
        Node<T>* temp = Maximum();
        if (temp != nullptr)
        {
            return temp->data;
        }
    }

    // Función que busca un valor en el árbol y devuelve el nodo que lo contiene (si existe).
    Node<T>* Search(T value)
    {
        Node<T>* temp = root;
        while (temp != nullptr && temp->data != value)
        {
            if (value < temp->data)
            {
                temp = temp->left;
            }
            else
            {
                temp = temp->right;
            }
        }
        return temp;
    }

    // Función para insertar un nuevo valor en el árbol binario.
    void Insert(T value)
    {
        Node<T>* temp = root;
        Node<T>* temp_parent = nullptr;
        while (temp != nullptr)
        {
            if (value < temp->data)
            {
                temp_parent = temp;
                temp = temp->left;
            }
            else
            {
                temp_parent = temp;
                temp = temp->right;
            }
        }

        Node<T>* newNode = new Node<T>(value, temp_parent);
        if (temp_parent == nullptr)
        {
            root = newNode;
        }
        else if (value < temp_parent->data)
        {
            temp_parent->left = newNode;
        }
        else
        {
            temp_parent->right = newNode;
        }
    }

    // Función que devuelve el sucesor de un nodo dado en el árbol.
    Node<T>* Sucesor(Node<T>* in_x)
    {
        if (in_x->right != nullptr)
        {
            return MinimumFromNode(in_x->right);
        }
        else
        {
            Node<T>* current = in_x;
            Node<T>* temp_parent = in_x->parent;
            while (temp_parent != nullptr && temp_parent->right == current)
            {
                current = temp_parent;
                temp_parent = current->parent;
            }
            return temp_parent;
        }
    }

    // Función que devuelve el predecesor de un nodo dado en el árbol.
    Node<T>* Predecesor(Node<T>* in_x)
    {
        if (in_x->left != nullptr)
        {
            return MaximumFromNode(in_x->left);
        }
        else
        {
            Node<T>* current = in_x;
            Node<T>* temp_parent = in_x->parent;
            while (temp_parent != nullptr && temp_parent->left == current)
            {
                current = temp_parent;
                temp_parent = current->parent;
            }
            return temp_parent;
        }
    }

    // Función para recorrer el árbol en orden (in-order) y mostrar los valores.
    void InOrder(Node<T>* in_x)
    {
        if (in_x != nullptr)
        {
            InOrder(in_x->left);
            std::cout << in_x->data << ", ";
            InOrder(in_x->right);
        }
    }

    // Función para recorrer el árbol en preorden (pre-order) y mostrar los valores.
    void PreOrder(Node<T>* in_x)
    {
        if (in_x != nullptr)
        {
            std::cout << in_x->data << ", ";
            PreOrder(in_x->left);
            PreOrder(in_x->right);
        }
    }

    // Función para recorrer el árbol en postorden (post-order) y mostrar los valores.
    void PostOrder(Node<T>* in_x)
    {
        if (in_x != nullptr)
        {
            PostOrder(in_x->left);
            PostOrder(in_x->right);
            std::cout << in_x->data << ", ";
        }
    }

    // Función auxiliar para reemplazar un nodo del árbol con otro nodo.
    void Transplant(Node<T>* in_u, Node<T>* in_v)
    {
        if (in_u->parent == nullptr)
        {
            root = in_v;
        }
        else if (in_u == in_u->parent->left)
        {
            in_u->parent->left = in_v;
        }
        else
        {
            in_u->parent->right = in_v;
        }
        if (in_v != nullptr)
        {
            in_v->parent = in_u->parent;
        }
    }

    // Función para eliminar un nodo del árbol.
    void DeleteNode(Node<T>* in_z)
    {
        if (in_z->left == nullptr)
        {
            Transplant(in_z, in_z->right);
        }
        else if (in_z->right == nullptr)
        {
            Transplant(in_z, in_z->left);
        }
        else
        {
            Node<T>* Y = MinimumFromNode(in_z->right);
            if (Y != in_z->right)
            {
                Transplant(Y, Y->right);
                Y->right = in_z->right;
                Y->right->parent = Y;
            }
            Transplant(in_z, Y);
            Y->left = in_z->left;
            Y->left->parent = Y;
        }
        delete in_z;
    }

    // Función para realizar el recorrido in-order de manera iterativa.
    void InOrderIterative()
    {
        if (root == nullptr)
        {
            return;
        }

        std::stack<Node<T>*> nodeStack;
        Node<T>* current = root;

        while (current != nullptr || !nodeStack.empty())
        {
            while (current != nullptr)
            {
                nodeStack.push(current);
                current = current->left;
            }

            current = nodeStack.top();
            nodeStack.pop();

            std::cout << current->data << ", ";

            current = current->right;
        }
    }

    // Función para realizar el recorrido pre-order de manera iterativa.
    void PreOrderIterative()
    {
        if (root == nullptr)
        {
            return;
        }

        std::stack<Node<T>*> nodeStack;
        nodeStack.push(root);

        while (!nodeStack.empty())
        {
            Node<T>* current = nodeStack.top();
            nodeStack.pop();

            std::cout << current->data << ", ";

            if (current->right != nullptr)
            {
                nodeStack.push(current->right);
            }

            if (current->left != nullptr)
            {
                nodeStack.push(current->left);
            }
        }
    }

    // Función para realizar el recorrido post-order de manera iterativa.
    void PostOrderIterative()
    {
        if (root == nullptr)
        {
            return;
        }

        std::stack<Node<T>*> stack1, stack2;
        stack1.push(root);

        // Llenar stack2 con el recorrido post-order invertido.
        while (!stack1.empty())
        {
            Node<T>* current = stack1.top();
            stack1.pop();
            stack2.push(current);

            if (current->left != nullptr)
            {
                stack1.push(current->left);
            }

            if (current->right != nullptr)
            {
                stack1.push(current->right);
            }
        }

        // Mostrar los valores del recorrido post-order.
        while (!stack2.empty())
        {
            Node<T>* current = stack2.top();
            stack2.pop();
            std::cout << current->data << ", ";
        }
    }
};

