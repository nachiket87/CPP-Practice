/* check if the vector servedOrders is in the right sequence as takeoutOrder and DinerinOrders */
#include<iostream>
#include<vector>
#include<string>

using namespace std;

bool order_checker(const vector<int>& takeOutOrders,
                   const vector<int>& servedOrders,
                   const vector<int>& dineInOrders)
{
   auto takeOutorderiter = takeOutOrders.cbegin();
   auto dineInOrdersiter = dineInOrders.cbegin();

   for(int order : servedOrders)
   {
      if(takeOutorderiter != takeOutOrders.cend() && order == *takeOutorderiter)
      {
         ++takeOutorderiter;
      }
      else if(dineInOrdersiter != dineInOrders.cend() && order == *dineInOrdersiter)
      {
         ++dineInOrdersiter;
      }
      else
      {
         return false;
      } 
   }
   if(dineInOrdersiter != dineInOrders.cend() || takeOutorderiter != takeOutOrders.cend())
   {
      return false;
   }
   return true;
}

int main()
{
   
   const vector<int> takeOutOrders = {1,3,5};
   const vector<int> dineInOrders = {2,4,6};
   const vector<int> servedOrders = {1,2,3,4,5,6};
   cout << order_checker(takeOutOrders, servedOrders, dineInOrders) << endl;
   return 0;
}