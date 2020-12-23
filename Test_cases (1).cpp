
/*
Test Case 1:

Input: 

2 Stores:
Local Grocery
East Lansing
Apples,10,$4.76

Electronics R Here
Ann Arbor
Bargain Phone,2,$200.00

1 items on my shopping list:
1 Apples

Output:

Store Related Information (ordered by in-file order):
There are 2 store(s).
Local Grocery has 1 distinct items.
Electronics R Here has 1 distinct items.
Item Related Information (ordered alphabetically):
There are 2 distinct item(s) available for purchase.
There are 10 Apples(s).
There are 2 Bargain Phone(s).
Shopping:
Trying to order 1 Apples(s).
1 store(s) sell Apples.
Total price: $4.76
Order 1 from Local Grocery in East Lansing
Be sure to bring $4.76 when you leave for the stores.

Test Case 2:

Input:

4 Stores:
Local Grocery
East Lansing
Apples,10,$4.76
Sandwich,2,$1.99
Olive Bread,3,$2.99
Milk,7,$1.25
Eggs,40,$0.78
Candy,4,$0.51

Electronics R Here
Ann Arbor
Bargain Phone,2,$200.00
S Phone,4,$650.00
Fruit Phone,2,$700.00

Corner Store
East Lansing
Milk,30,$2.00
Eggs,2,$0.50
Candy,6,$1.00
Soda,5,$1.56
Bargain Phone,3,$185.00

Sparty's
East Lansing
Candy,10,$0.85
Soda,4,$1.50
Sandwich,3,$2.99

1 items on my shopping list:
4 Apples

Output:

Store Related Information (ordered by in-file order):
There are 4 store(s).
Local Grocery has 6 distinct items.
Electronics R Here has 3 distinct items.
Corner Store has 5 distinct items.
Sparty's has 3 distinct items.
Item Related Information (ordered alphabetically):
There are 10 distinct item(s) available for purchase.
There are 10 Apples(s).
There are 5 Bargain Phone(s).
There are 20 Candy(s).
There are 42 Eggs(s).
There are 2 Fruit Phone(s).
There are 37 Milk(s).
There are 3 Olive Bread(s).
There are 4 S Phone(s).
There are 5 Sandwich(s).
There are 9 Soda(s).
Shopping:
Trying to order 4 Apples(s).
1 store(s) sell Apples.
Total price: $19.04
Order 4 from Local Grocery in East Lansing
Be sure to bring $19.04 when you leave for the stores.

Test case 3:

Input:

Store Related Information (ordered by in-file order):
There are 4 store(s).
Local Grocery has 6 distinct items.
Electronics R Here has 3 distinct items.
Corner Store has 5 distinct items.
Sparty's has 3 distinct items.
Item Related Information (ordered alphabetically):
There are 10 distinct item(s) available for purchase.
There are 10 Apples(s).
There are 5 Bargain Phone(s).
There are 20 Candy(s).
There are 42 Eggs(s).
There are 2 Fruit Phone(s).
There are 37 Milk(s).
There are 3 Olive Bread(s).
There are 4 S Phone(s).
There are 5 Sandwich(s).
There are 9 Soda(s).
Shopping:
Trying to order 2 Eggs(s).
2 store(s) sell Eggs.
Total price: $1.00
Order 2 from Corner Store in East Lansing
Be sure to bring $1.00 when you leave for the stores.

Correct Output:

Store Related Information (ordered by in-file order):
There are 4 store(s).
Local Grocery has 6 distinct items.
Electronics R Here has 3 distinct items.
Corner Store has 5 distinct items.
Sparty's has 3 distinct items.
Item Related Information (ordered alphabetically):
There are 10 distinct item(s) available for purchase.
There are 10 Apples(s).
There are 5 Bargain Phone(s).
There are 20 Candy(s).
There are 42 Eggs(s).
There are 2 Fruit Phone(s).
There are 37 Milk(s).
There are 3 Olive Bread(s).
There are 4 S Phone(s).
There are 5 Sandwich(s).
There are 9 Soda(s).
Shopping:
Trying to order 2 Eggs(s).
2 store(s) sell Eggs.
Total price: $1.00
Order 2 from Corner Store in East Lansing
Be sure to bring $1.00 when you leave for the stores.

Test Case 4:

Input:

4 Stores:
Local Grocery
East Lansing
Apples,10,$4.76
Sandwich,2,$1.99
Olive Bread,3,$2.99
Milk,7,$1.25
Eggs,40,$0.78
Candy,4,$0.51

Electronics R Here
Ann Arbor
Bargain Phone,2,$200.00
S Phone,4,$650.00
Fruit Phone,2,$700.00

Corner Store
East Lansing
Milk,30,$2.00
Eggs,2,$0.50
Candy,6,$1.00
Soda,5,$1.56
Bargain Phone,3,$185.00

Sparty's
East Lansing
Candy,10,$0.85
Soda,4,$1.50
Sandwich,3,$2.99

1 items on my shopping list:
10 Eggs

Output:

Store Related Information (ordered by in-file order):
There are 4 store(s).
Local Grocery has 6 distinct items.
Electronics R Here has 3 distinct items.
Corner Store has 5 distinct items.
Sparty's has 3 distinct items.
Item Related Information (ordered alphabetically):
There are 10 distinct item(s) available for purchase.
There are 10 Apples(s).
There are 5 Bargain Phone(s).
There are 20 Candy(s).
There are 42 Eggs(s).
There are 2 Fruit Phone(s).
There are 37 Milk(s).
There are 3 Olive Bread(s).
There are 4 S Phone(s).
There are 5 Sandwich(s).
There are 9 Soda(s).
Shopping:
Trying to order 10 Eggs(s).
2 store(s) sell Eggs.
Total price: $7.24
Order 2 from Corner Store in East Lansing
Order 8 from Local Grocery in East Lansing
Be sure to bring $7.24 when you leave for the stores.

Test Case 5:

Input:

6 Stores:
Local Grocery
East Lansing
Apples,10,$4.76
Sandwich,2,$1.99
Olive Bread,3,$2.99
Milk,7,$1.25
Eggs,40,$0.78
Candy,4,$0.51

Fast Food Dispenser
Lansing
Soda,3,$1.01
Burger,2,$2.00
Fries,100,$0.50

Electronics R Here
Ann Arbor
Bargain Phone,2,$200.00
S Phone,4,$650.00
Fruit Phone,2,$700.00
TV,10,$4000.00

Corner Store
East Lansing
Milk,30,$2.00
Eggs,2,$0.50
Candy,6,$1.00
Soda,5,$1.56
Bargain Phone,3,$185.00

Sparty's
East Lansing
Candy,10,$0.85
Soda,4,$1.50
Sandwich,3,$2.99

Stolen Goods
Neighbor's House
Candy,3,$0.00
TV,4,$4.00

5 items on my shopping list:
105 Candy
5 Soda
1 S Phone
10 TV
1 Burger

Output:

Store Related Information (ordered by in-file order):
There are 6 store(s).
Local Grocery has 6 distinct items.
Fast Food Dispenser has 3 distinct items.
Electronics R Here has 4 distinct items.
Corner Store has 5 distinct items.
Sparty's has 3 distinct items.
Stolen Goods has 2 distinct items.
Item Related Information (ordered alphabetically):
There are 13 distinct item(s) available for purchase.
There are 10 Apples(s).
There are 5 Bargain Phone(s).
There are 2 Burger(s).
There are 23 Candy(s).
There are 42 Eggs(s).
There are 100 Fries(s).
There are 2 Fruit Phone(s).
There are 37 Milk(s).
There are 3 Olive Bread(s).
There are 4 S Phone(s).
There are 5 Sandwich(s).
There are 12 Soda(s).
There are 14 TV(s).
Shopping:
Trying to order 105 Candy(s).
4 store(s) sell Candy.
Total price: $16.54
Order 3 from Stolen Goods in Neighbor's House
Order 4 from Local Grocery in East Lansing
Order 10 from Sparty's in East Lansing
Order 6 from Corner Store in East Lansing
Trying to order 5 Soda(s).
3 store(s) sell Soda.
Total price: $6.03
Order 3 from Fast Food Dispenser in Lansing
Order 2 from Sparty's in East Lansing
Trying to order 1 S Phone(s).
1 store(s) sell S Phone.
Total price: $650.00
Order 1 from Electronics R Here in Ann Arbor
Trying to order 10 TV(s).
2 store(s) sell TV.
Total price: $24016.00
Order 4 from Stolen Goods in Neighbor's House
Order 6 from Electronics R Here in Ann Arbor
Trying to order 1 Burger(s).
1 store(s) sell Burger.
Total price: $2.00
Order 1 from Fast Food Dispenser in Lansing
Be sure to bring $24690.57 when you leave for the stores.



