/* Write your T-SQL query statement below */
select emp.name,b.bonus from Employee emp
left join  bonus b
on emp.empId = b.empId 
where b.bonus < 1000 or b.bonus is null