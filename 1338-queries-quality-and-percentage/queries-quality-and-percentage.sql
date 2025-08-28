# Write your MySQL query statement below
select query_name, 
round(avg(rating/position),2) as quality, 
round(SUM(rating<3)*100/count(rating),2)
as poor_query_percentage 
from queries
group by query_name; 