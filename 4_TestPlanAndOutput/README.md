# Test Plan 

 admin to add items | Implemented| Description |1
HLR2| User to place order| Implemented| Description |1
HLR3| User to view items| Implemented| Description |1
HLR4| admin to view orders| Implemented| Description |1
HLR4| admin to add records| Implemented| Description |1
HLR4| admin to search records| Implemented| Description |1


| **Test ID** | **HLT ID** | **Description of Test case**      | **Exp IN** | **Exp OUT** | **Actual Out** |**PASS/FAIL**  |    
|-------------|-----|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  T_01|H_01| Provide required details for login to book a ticket| password| Successfully logined In | Successfully logined In| PASS |
|  T_02|H_01| When wrong password is entered| Password|  Entered Password is wrong | Entered Password is wrong | PASS |
|  T_03|H_02|Display the  details of movie available|  Enter choice | Display list | Display list | PASS |
|  T_04|H_02| Purchase a ticket for the movie available | enter choice | ThankYou for Booking Ticket | ThankYou for Booking Ticket| PASS |
|  T_05|H_03|  Summary of a ticket for purchased movie| enter choice | Booking ID,Customer name,Show Name,Hallno,Price | Booking ID,Customer name,Show Name,Hallno,Price| PASS |
|  T_06|H_04| Cancel a ticket   |ID number|  Your ticket is cancelled | Your ticket is cancelled | PASS |
|  T_07|H_03| Change the price of ticket (only admin) | password| Please enter new price | Please enter new price   | PASS |
|  T_08|H_03| Change the price of ticket after login (only admin) | enter new price -price|Price Updated Successfully | Price Updated Successfully  | PASS |
|  T_09|H_03|When wrong password is entered while Changing the price of ticket (only admin) | password | Entered Password is wrong  |  Entered Password is wrong |PASS |
|  T_10|H_05|To view the reserved ticke |password| summary of tickeT|summary of ticket | PASS |
|  T_11|H_05|When wrong password is entered to view the reserved ticket|Correct Password | Entered Password is wrongt|Entered Password is wrong | PASS |




## Outputs
* Login page



![2022-02-09 (5)](https://user-images.githubusercontent.com/59721830/153244131-14703180-c1d3-4f03-bb3d-35682992b680.png)

* Admin section



![2022-02-09 (6)](https://user-images.githubusercontent.com/59721830/153244253-0a7f8e99-15b3-47c8-9fe4-ac5d6767762c.png)

* Customer section



![2022-02-09 (7)](https://user-images.githubusercontent.com/59721830/153244356-8dc2bb76-2d6e-46f7-af27-c6ad8d304465.png)

* Cart 


![2022-02-10 (7)](https://user-images.githubusercontent.com/59721830/153432150-3f567d8e-5146-4ebf-941f-1e5f3e88749b.png)

