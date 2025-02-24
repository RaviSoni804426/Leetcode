# Write your MySQL query statement below
select Visits.customer_id, count(*) as count_no_trans
from Visits
left join Transactions
on Visits.visit_id=Transactions.visit_id
where  Transactions.transaction_id is null
group by Visits.customer_id;

-- SELECT v.customer_id, COUNT(*) AS count_no_trans
-- FROM Visits v
-- LEFT JOIN Transactions t
-- ON v.visit_id = t.visit_id
-- WHERE t.transaction_id IS NULL 
-- GROUP BY v.customer_id; 