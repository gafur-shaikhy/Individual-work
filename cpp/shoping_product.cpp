#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <map>


using namespace std;
int main(){

    map <string, pair <string, double>> shops;

    cout << "Number of product: ";
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){

        cout << "Category of product: ";
        string Category;
        cin >> Category;

        cout << "Name and price of product: ";
        string name; 
        double price;
        cin >> name >> price;

        shops[Category] = make_pair(name, price);

    }

    cout << "List of products: " << endl;

    map <string, pair <string, double>>::iterator it;
    for(it = shops.begin(); it != shops.end(); it++){
        cout << "Category: " << it -> first << ";  ";
        cout << "Name: " << it -> second.first << ";  ";
        cout << "Price: " << it -> second.second;
        cout << endl;
    }

    cout << "search {Category} : ";
    string search_category;
    cin >> search_category;

    map <string, pair <string, double>>::iterator src;
    for(src = shops.begin(); src != shops.end(); src++){
        if(src -> first == search_category){
            cout << "Find name: " << src -> second.first << ", ";
            cout << "Find price: " << src -> second.second;
            cout << endl;
        }
    }

    

    return 0;
}

// shoping_product.cpp