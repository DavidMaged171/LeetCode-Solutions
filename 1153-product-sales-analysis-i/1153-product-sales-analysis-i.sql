/* Write your T-SQL query statement below */
select Product.product_name,Sales.year,Sales.price from Product 
inner join Sales on Product.Product_id=Sales.product_id 