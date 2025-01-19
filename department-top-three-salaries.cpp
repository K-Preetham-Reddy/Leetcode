# Write your MySQL query statement below
WITH CTE AS(
    SELECT e.name AS Employee, e.salary AS Salary, d.name AS Department,
    DENSE_RANK() OVER(PARTITION BY d.id ORDER BY e.salary DESC) AS ranking
    FROM Employee AS e JOIN Department AS d
    ON e.departmentId = d.id
)
SELECT Department, Employee, Salary
FROM CTE
WHERE ranking<=3