select email as Email from Person
Group by email having count(email)>1
