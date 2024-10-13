START

// Initialize variables
DECLARE userName as STRING
DECLARE choice, dateTravel, mealPref, seatPref, loyaltyMem, specialReq, durationFlight as INTEGER

// Get the user's name
PRINT "Welcome to the Flight Booking System"
PRINT "Please enter your name: "
READ userName

// Display the menu
PRINT "Hello, " + userName + "!"
PRINT "Please choose a Booking Class:"
PRINT "1 | Economy"
PRINT "2 | Premium Economy"
PRINT "3 | Business"
PRINT "4 | First Class"
PRINT "Enter your choice: "
READ choice

// Choosing class options
IF choice == 1 THEN
    PRINT "Welcome to Economy Class"
ELSE IF choice == 2 THEN
    PRINT "Welcome to Premium Economy"
ELSE IF choice == 3 THEN
    PRINT "Welcome to Business Class"
ELSE IF choice == 4 THEN
    PRINT "Welcome to First Class"
ELSE
    PRINT "Invalid choice. Please try again."
    END

// Date of travel
PRINT "Enter Date of Travel:"
PRINT "1 | MONDAY 7:00AM"
PRINT "2 | TUESDAY 9:30AM"
PRINT "3 | WEDNESDAY 4:30PM"
PRINT "4 | THURSDAY 7:00PM"
PRINT "Enter your choice: "
READ dateTravel

// Meal preference
PRINT "Meal Preference:"
PRINT "1 | Vegetarian"
PRINT "2 | Non-Vegetarian"
PRINT "3 | Vegan"
PRINT "4 | Gluten-Free"
PRINT "Enter your choice: "
READ mealPref

// Seat preference
PRINT "Seat Preference:"
PRINT "1 | Aisle"
PRINT "2 | Window"
PRINT "3 | Middle"
PRINT "Enter your choice: "
READ seatPref

// Loyalty membership
PRINT "Loyalty Membership:"
PRINT "1 | Gold"
PRINT "2 | Silver"
PRINT "3 | Bronze"
PRINT "4 | None"
PRINT "Enter your choice: "
READ loyaltyMem

// Special requirement
PRINT "Special Requirement:"
PRINT "1 | Wheelchair access"
PRINT "2 | Extra legroom"
PRINT "3 | Near the restroom"
PRINT "Enter your choice: "
READ specialReq

// Duration of flight
PRINT "Duration of Flight:"
PRINT "1 | < 3 Hours"
PRINT "2 | 3-6 Hours"
PRINT "3 | > 6 Hours"
PRINT "Enter your choice: "
READ durationFlight

// Display confirmation
PRINT "✈︎ Full Name: " + userName
PRINT "✈︎ Reservation Code: 0009998762"

// Booking class output
IF choice == 1 THEN
    PRINT "✈︎ Booking Class: ECONOMY CLASS"
ELSE IF choice == 2 THEN
    PRINT "✈︎ Booking Class: PREMIUM ECONOMY"
ELSE IF choice == 3 THEN
    PRINT "✈︎ Booking Class: BUSINESS CLASS"
ELSE IF choice == 4 THEN
    PRINT "✈︎ Booking Class: FIRST CLASS"

// Loyalty membership output
IF loyaltyMem == 1 THEN
    PRINT "✈︎ Loyalty Membership: GOLD"
ELSE IF loyaltyMem == 2 THEN
    PRINT "✈︎ Loyalty Membership: SILVER"
ELSE IF loyaltyMem == 3 THEN
    PRINT "✈︎ Loyalty Membership: BRONZE"
ELSE IF loyaltyMem == 4 THEN
    PRINT "✈︎ Loyalty Membership: NONE"

// Date of travel output
IF dateTravel == 1 THEN
    PRINT "✈︎ Date of Travel: MONDAY 7:00AM (PEAK HOUR)"
ELSE IF dateTravel == 2 THEN
    PRINT "✈︎ Date of Travel: TUESDAY 9:30AM (PEAK HOUR)"
ELSE IF dateTravel == 3 THEN
    PRINT "✈︎ Date of Travel: WEDNESDAY 4:30PM (OFF-PEAK HOUR)"
ELSE IF dateTravel == 4 THEN
    PRINT "✈︎ Date of Travel: THURSDAY 7:00PM (OFF-PEAK HOUR)"

// Seat preference output
IF seatPref == 1 THEN
    PRINT "✈︎ Seat Preference: AISLE"
ELSE IF seatPref == 2 THEN
    PRINT "✈︎ Seat Preference: WINDOW"
ELSE IF seatPref == 3 THEN
    PRINT "✈︎ Seat Preference: MIDDLE"

// Discount and vouchers
PRINT "Available Discounts and Vouchers:"

// For First Class
IF choice == 4 THEN
    PRINT "✈︎ NO AVAILABLE DISCOUNTS AND VOUCHERS"

// For Business Class
ELSE IF choice == 3 THEN
    IF durationFlight == 1 AND seatPref == 1 THEN
        PRINT "✈︎ DRINK VOUCHER"
    ELSE
        PRINT "✈︎ NO AVAILABLE DISCOUNTS AND VOUCHERS"

// For Premium Economy
ELSE IF choice == 2 THEN
    IF dateTravel == 1 OR dateTravel == 2 THEN
        PRINT "✈︎ CHECK FOR AVAILABLE DISCOUNTS FOR NEXT BOOKING DURING PEAK PERIOD"
    ELSE
        PRINT "✈︎ NO AVAILABLE DISCOUNTS AND VOUCHERS"

// For Economy Class
ELSE IF choice == 1 THEN
    IF loyaltyMem == 3 THEN
        PRINT "✈︎ 5% DISCOUNT ON IN-FLIGHT MEALS"
    ELSE
        PRINT "✈︎ NO AVAILABLE DISCOUNTS AND VOUCHERS"

// END
