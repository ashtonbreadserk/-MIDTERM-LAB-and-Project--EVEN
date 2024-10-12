#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() {

// Initialize variables
string userName;
int choice, dateTravel, mealPref, seatPref, loyaltyMem, specialReq, durationFlight;

// Get the user's name
cout << "Welcome to SkySail Airline Reservation System" << endl;
cout << "Please enter your name: ";
getline(cin, userName);

// Display the menu
cout << "\nHello, " << userName << "!" << endl;
cout << "+----------------------------------+" << endl;
cout << "|   Please choose a Booking Class: |" << endl;
cout << "|----------------------------------|" << endl;
cout << "| 1 | Economy                      |" << endl;
cout << "| 2 | Premium Economy              |" << endl;
cout << "| 3 | Buisness                     |" << endl;
cout << "| 4 | First Class                  |" << endl;
cout << "+----------------------------------+" << endl;
cout << "Enter your choice: ";
cin >> choice;
cout << endl;

// choosing class options
if (choice == 1) {
    cout << "Hello " << userName << "!" << " Welcome to Booking Class: Economy" << endl;
}
else if (choice == 2) {
    cout << "Hello " << userName << "!" << " Welcome to Booking Class: Premium Economy" << endl;
}
else if (choice == 3) {
    cout << "Hello " << userName << "!" << " Welcome to Booking Class: Buisness" << endl;
}
else if (choice == 4) {
    cout << "Hello " << userName << "!" << " Welcome to Booking Class: First Class" << endl;
}


// date of travel 
cout << endl;
cout << "+---------------------------+" << endl;
cout << "|   Enter Date of Travel:   |" << endl;
cout << "|--------Available dates----|" << endl;
cout << "| 1 | MONDAY 7:00AM         |" << endl;
cout << "| 2 | TUESDAY 9:30AM        |" << endl;
cout << "| 3 | WEDNESDAY 4:30PM      |" << endl;
cout << "| 4 | THURSDAY 7:00PM       |" << endl;
cout << "+---------------------------+" << endl;
cout << "Enter your choice: ";
cin >> dateTravel;

// meal preference
cout << endl;
cout << "+---------------------------+" << endl;
cout << "|     Meal Preference:      |" << endl;
cout << "|---------------------------|" << endl;
cout << "| 1 | Vegeterian            |" << endl;
cout << "| 2 | Non-Vegetarian        |" << endl;
cout << "| 3 | Vegan                 |" << endl;
cout << "| 4 | Gluten-Free           |" << endl;
cout << "+---------------------------+" << endl;
cout << "Enter your choice: ";
cin >> mealPref;

// seat preference
cout << endl;
cout << "+---------------------------+" << endl;
cout << "|     Seat Preference:      |" << endl;
cout << "|---------------------------|" << endl;
cout << "| 1 | Aisle                 |" << endl;
cout << "| 2 | Window                |" << endl;
cout << "| 3 | Middle                |" << endl;
cout << "+---------------------------+" << endl;
cout << "Enter your choice: ";
cin >> seatPref;

// loyalty membership
cout << endl;
cout << "+---------------------------+" << endl;
cout << "|     Loyalty Membership:   |" << endl;
cout << "|---------------------------|" << endl;
cout << "| 1 | Gold                  |" << endl;
cout << "| 2 | Silver                |" << endl;
cout << "| 3 | Bronze                |" << endl;
cout << "| 4 | None                  |" << endl;
cout << "+---------------------------+" << endl;
cout << "Enter your choice: ";
cin >> loyaltyMem;

// special requirement
cout << endl;
cout << "+---------------------------+" << endl;
cout << "|     Special Requirement:  |" << endl;
cout << "|---------------------------|" << endl;
cout << "| 1 | Wheelchair access     |" << endl;
cout << "| 2 | Extra legroom         |" << endl;
cout << "| 3 | Near the restroom     |" << endl;
cout << "+---------------------------+" << endl;
cout << "Enter your choice: ";
cin >> specialReq;

//duration of flight
cout << endl;
cout << "+---------------------------+" << endl;
cout << "|    Duration of Flight:    |" << endl;
cout << "|---------------------------|" << endl;
cout << "| 1 | < 3 Hours             |" << endl;
cout << "| 2 | 3-6 Hours             |" << endl;
cout << "| 3 | > 6 Hours             |" << endl;
cout << "+---------------------------+" << endl;
cout << "Enter your choice: ";
cin >> durationFlight;
cout << endl;

// if statement for class
// economy class
if (choice == 1) {
    cout << "Booking Class: Economy" << endl;
    if (loyaltyMem == 3) {
        cout << "(ECONOMY CLASS) 5 PERCENT DISCOUNT ON IN-FLIGHT MEALS" << endl;
    }
    if (specialReq == 1) {
        cout << "(ECONOMY CLASS) ENSURING GROUND STAFF ASSISTANCE DURING BOARDING AND DE-BOARDING" << endl;
    }
}

// premium economy
else if (choice == 2) {
    cout << "Booking Class: Premium Economy" << endl;
    if (dateTravel == 1) {
        cout << "(PREMIUM ECONOMY) *AVAILABLE DISCOUNTS* : 10 PERCENT OFF ON MEALS" << endl;
    }
    else if (dateTravel == 2) {
        cout << "(PREMIUM ECONOMY) *AVAILABLE DISCOUNTS* : 10 PERCENT OFF ON MEALS" << endl;
    }
    if (specialReq == 2) {
        cout << "(PREMIUM ECONOMY) ALLOCATING FRONT-ROW SEATS" << endl;
    }
}

// buisness class
else if (choice == 3) {
    cout << "Booking Class: Buisness" << endl;
    if (durationFlight == 3 && seatPref == 1) {
        cout << "(BUISNESS CLASS) DRINK VOUCHER" << endl;
    }
    if (loyaltyMem == 1) {
        cout << "(GOLD MEMBERSHIP) PRIORITY BOARDING" << endl;
    }
    else if (loyaltyMem == 2) {
        cout << "(SILVER MEMBERSHIP) PRIORITY BOARDING" << endl;
    }
}

// first class
else if (choice == 4) {
    cout << "Your Booking Class: First Class" << endl;
    cout << "(FIRST CLASS) IN-FLIGHT WIFI: ACCESS APPROVED" << endl;
   
    if (seatPref == 2 && durationFlight == 3){
        cout << "(FIRST CLASS) FREE SLEEPING KIT" << endl;
    }
     if (loyaltyMem == 1) {
        cout << "(GOLD MEMBERSHIP) AIRPORT LOUNGE: ACCESS APPROVED" << endl;
    }
}

// if statement for date of travel
if (dateTravel == 1) {
    cout << "Date of Travel: MONDAY 7:00AM (PEAK HOUR)" << endl;
}
else if (dateTravel == 2) {
    cout << "Date of Travel: TUESDAY 9:30AM (PEAK HOUR)" << endl;
}
else if (dateTravel == 3) {
    cout << "Date of Travel: WEDNESDAY 4:30PM (OFF-PEAK HOUR)" << endl;
}
else if (dateTravel == 4) {
    cout << "Date of Travel: THURSDAY 7:00PM (OFF-PEAK HOUR)" << endl;
}


// if statement for meal preference
if (mealPref == 1) {
    cout << "Meal Preference: VEGETARIAN" << endl; 
}
else if (mealPref == 2) {
    cout << "Meal Preference: NON-VEGETERIAN" << endl;
}
else if (mealPref == 3) {
    cout << "Meal Preference: VEGAN" << endl;
    if (choice == 4) {
        cout << "(FIRST CLASS) **CONFIRMING SPECIAL MEAL BEFORE 48 HOURS**" << endl;
    }
}
else if (mealPref == 4) {
    cout << "Meal Preference: GLUTEN-FREE" << endl;
    if (choice == 4) {
        cout << "(FIRST CLASS) **CONFIRMING SPECIAL MEAL BEFORE 48 HOURS**" << endl;
    }
}

// if statement seat preference
if (seatPref == 1) {
    cout << "Seat Preference: AISLE" << endl; 
}
else if (seatPref == 2) {
    cout << "Seat Preference: WINDOW" << endl;
}
else if (seatPref == 3) {
    cout << "Seat Preference: MIDDLE" << endl;
}

// if statement loyalty membership
if (loyaltyMem == 1) {
    cout << "Loyalty Membership: GOLD" << endl; 
}
else if (loyaltyMem == 2) {
    cout << "Loyalty Membership: SILVER" << endl;
}
else if (loyaltyMem == 3) {
    cout << "Loyalty Membership: BRONZE" << endl;
}
else if (loyaltyMem == 3) {
    cout << "Loyalty Membership: NONE" << endl;
}

// if statement special requirement
if (specialReq == 1) {
    cout << "Special Request: WHEELCHAIR ACCESS" << endl; 
    cout << "(WHEELCHAIR ACCESS) ALLOCATE SEATS CLOSE TO THE ENTRANCE" << endl;
    cout << "(WHEELCHAIR ACCESS) ENSURING ASSISTANCE DURING BOARDING AND DE-BOARDING" << endl;
}
else if (specialReq == 2) {
    cout << "Special Request: EXTRA LEGROOM" << endl; 
}
else if (specialReq == 3) {
    cout << "Special Request: NEAR THE RESTROOM" << endl; 
    cout << "(NEAR RESTROOM ACCESS) SIT IS NOT NEXT TO THE EMERGENCY EXITS DUE TO SECURITY REGULATIONS" << endl;
}

// if statement duration of flight
if (durationFlight == 1) {
    cout << "Duration of Flight: (< 3 HOURS) SHORT-HAUL" << endl; 
    if (mealPref == 1) {
        cout << "(VEGETARIAN MEAL PREFERENCE) COMPLIMENTARY SNACK BOX" << endl;
    }
    else if (mealPref == 3) {
        cout << "(VEGAN MEAL PREFERENCE) COMPLIMENTARY SNACK BOX" << endl;
    }
}
else if (durationFlight == 2) {
    cout << "Duration of Flight: (3-6 HOURS) MEDIUM-HAUL" << endl; 
    if (seatPref == 2) {
        cout << "(WINDOW SEAT PREFERENCE) ACCESS TO IN-FLIGHT ENTERTAINMENT WITH A CHARGING PORT" << endl;
    }
}
else if (durationFlight == 3) {
    cout << "Duration of Flight: (> 3 HOURS) LONG-HAUL" << endl; 
    cout << "(LONG-HAUL FLIGHTS) BLANKETS AND HEADPHONES" << endl;
    if (choice == 1 && seatPref == 3) {
        cout << "(ECONOMY CLASS AND MIDDLE SEAT PREFERENCE) COMPLIMENTARY NECK PILLOW" << endl;
    }
}

return 0;

}
