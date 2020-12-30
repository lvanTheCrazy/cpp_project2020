#include <vector>

using mytype = int;
using namespace std;
struct Tree
{
    mytype data{};
    Tree* left{}, * right{};

    Tree(mytype key) : data(key) {}
};

Tree* newtree(mytype key)
{
    return new Tree{ key };
}

Tree* insert(Tree* tree, mytype key)
{
    if (tree == nullptr)
        return newtree(key);

    if (key < tree->data)
        tree->left = insert(tree->left, key);
    else
        tree->right = insert(tree->right, key);

    return tree;
}

void store(Tree* root, vector<mytype>& a)
{
    if (root != nullptr) {
        store(root->left, a);
        a.push_back(root->data);
        store(root->right, a);
    }
}

void TreeSort(vector<mytype>& a)
{
    Tree* root{};

    for (const auto& aa : a)
        insert(root, aa);

    a.clear();
    store(root, a);
}
vector<int> TreeSortByIssabek(vector<int> a) {
    TreeSort(a);
    return a;
}

vector<double> TreeSortByIssabek(vector<double> a) {
    return a;
}