/* Write your T-SQL query statement below */
/* Write your T-SQL query statement below */
select w1.id from Weather w1
inner join Weather W2
on w2.recordDate = DATEADD(day,-1,W1.recordDate)
where w2.temperature <w1.temperature 