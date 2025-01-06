# Write your MySQL query statement below
SELECT E.name
FROM Employee E
INNER JOIN Employee M
ON E.id=M.managerId
GROUP BY M.managerId
HAVING COUNT(*)>=5;