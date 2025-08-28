SELECT 
    ROUND(
        SUM(order_date = customer_pref_delivery_date) * 100.0 / COUNT(*),
        2
    ) AS immediate_percentage
FROM Delivery d
WHERE order_date = (
    SELECT MIN(order_date)
    FROM Delivery
    WHERE customer_id = d.customer_id
);
