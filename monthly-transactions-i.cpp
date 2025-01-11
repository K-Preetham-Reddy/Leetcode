# Write your MySQL query statement below
SELECT DATE_FORMAT(Transactions.trans_date,'%Y-%m') AS month,Transactions.country,COUNT(*) AS trans_count,SUM(if(Transactions.state="approved",1,0)) AS approved_count,SUM(Transactions.amount) trans_total_amount, SUM(if(Transactions.state="approved",Transactions.amount,0)) AS approved_total_amount
FROM Transactions
GROUP BY DATE_FORMAT(Transactions.trans_date,'%Y-%m'), Transactions.country;