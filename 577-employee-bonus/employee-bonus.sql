# Write your MySQL query statement below
# Write your MySQL query statement below
SELECT emp.Name , bonus 
from Employee emp left join Bonus b on emp.empId= b.empId
where b.bonus<'1000' or bonus is null
