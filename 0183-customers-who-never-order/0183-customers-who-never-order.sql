# Write your MySQL query statement 
select name as Customers  from customers where id not in   (select c.id from customers c inner join  orders o on c.id=o.customerId);