#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() {

// Initialize variables
string userName;
int choice, dateTravel, mealPref, seatPref, loyaltyMem, specialReq, durationFlight;

// Get the user's name
cout << R"(
 ███████╗██╗  ██╗██╗   ██╗███████╗ █████╗ ██╗██╗          █████╗ ██╗██████╗ ██╗     ██╗███╗   ██╗███████╗
██╔════╝██║ ██╔╝╚██╗ ██╔╝██╔════╝██╔══██╗██║██║         ██╔══██╗██║██╔══██╗██║     ██║████╗  ██║██╔════╝
███████╗█████╔╝  ╚████╔╝ ███████╗███████║██║██║         ███████║██║██████╔╝██║     ██║██╔██╗ ██║█████╗  
╚════██║██╔═██╗   ╚██╔╝  ╚════██║██╔══██║██║██║         ██╔══██║██║██╔══██╗██║     ██║██║╚██╗██║██╔══╝  
███████║██║  ██╗   ██║   ███████║██║  ██║██║███████╗    ██║  ██║██║██║  ██║███████╗██║██║ ╚████║███████╗
╚══════╝╚═╝  ╚═╝   ╚═╝   ╚══════╝╚═╝  ╚═╝╚═╝╚══════╝    ╚═╝  ╚═╝╚═╝╚═╝  ╚═╝╚══════╝╚═╝╚═╝  ╚═══╝╚══════╝
                                                                                                        
██████╗ ███████╗███████╗███████╗██████╗ ██╗   ██╗ █████╗ ████████╗██╗ ██████╗ ███╗   ██╗    ███████╗██╗   ██╗███████╗████████╗███████╗███╗   ███╗
██╔══██╗██╔════╝██╔════╝██╔════╝██╔══██╗██║   ██║██╔══██╗╚══██╔══╝██║██╔═══██╗████╗  ██║    ██╔════╝╚██╗ ██╔╝██╔════╝╚══██╔══╝██╔════╝████╗ ████║
██████╔╝█████╗  ███████╗█████╗  ██████╔╝██║   ██║███████║   ██║   ██║██║   ██║██╔██╗ ██║    ███████╗ ╚████╔╝ ███████╗   ██║   █████╗  ██╔████╔██║
██╔══██╗██╔══╝  ╚════██║██╔══╝  ██╔══██╗╚██╗ ██╔╝██╔══██║   ██║   ██║██║   ██║██║╚██╗██║    ╚════██║  ╚██╔╝  ╚════██║   ██║   ██╔══╝  ██║╚██╔╝██║
██║  ██║███████╗███████║███████╗██║  ██║ ╚████╔╝ ██║  ██║   ██║   ██║╚██████╔╝██║ ╚████║    ███████║   ██║   ███████║   ██║   ███████╗██║ ╚═╝ ██║
╚═╝  ╚═╝╚══════╝╚══════╝╚══════╝╚═╝  ╚═╝  ╚═══╝  ╚═╝  ╚═╝   ╚═╝   ╚═╝ ╚═════╝ ╚═╝  ╚═══╝    ╚══════╝   ╚═╝   ╚══════╝   ╚═╝   ╚══════╝╚═╝     ╚═╝

)" << '\n';
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
    cout << "Hello " << userName << "!" " Welcome to:" << endl;
    cout << endl; 
    cout << R"(
███████╗ ██████╗ ██████╗ ███╗   ██╗ ██████╗ ███╗   ███╗██╗   ██╗     ██████╗██╗      █████╗ ███████╗███████╗
██╔════╝██╔════╝██╔═══██╗████╗  ██║██╔═══██╗████╗ ████║╚██╗ ██╔╝    ██╔════╝██║     ██╔══██╗██╔════╝██╔════╝
█████╗  ██║     ██║   ██║██╔██╗ ██║██║   ██║██╔████╔██║ ╚████╔╝     ██║     ██║     ███████║███████╗███████╗
██╔══╝  ██║     ██║   ██║██║╚██╗██║██║   ██║██║╚██╔╝██║  ╚██╔╝      ██║     ██║     ██╔══██║╚════██║╚════██║
███████╗╚██████╗╚██████╔╝██║ ╚████║╚██████╔╝██║ ╚═╝ ██║   ██║       ╚██████╗███████╗██║  ██║███████║███████║
╚══════╝ ╚═════╝ ╚═════╝ ╚═╝  ╚═══╝ ╚═════╝ ╚═╝     ╚═╝   ╚═╝        ╚═════╝╚══════╝╚═╝  ╚═╝╚══════╝╚══════╝    
    )" << endl;
}
else if (choice == 2) {
    cout << "Hello " << userName << "!" " Welcome to:" << endl;
    cout << endl; 
    cout << R"(
██████╗ ██████╗ ███████╗███╗   ███╗██╗██╗   ██╗███╗   ███╗    ███████╗ ██████╗ ██████╗ ███╗   ██╗ ██████╗ ███╗   ███╗██╗   ██╗
██╔══██╗██╔══██╗██╔════╝████╗ ████║██║██║   ██║████╗ ████║    ██╔════╝██╔════╝██╔═══██╗████╗  ██║██╔═══██╗████╗ ████║╚██╗ ██╔╝
██████╔╝██████╔╝█████╗  ██╔████╔██║██║██║   ██║██╔████╔██║    █████╗  ██║     ██║   ██║██╔██╗ ██║██║   ██║██╔████╔██║ ╚████╔╝ 
██╔═══╝ ██╔══██╗██╔══╝  ██║╚██╔╝██║██║██║   ██║██║╚██╔╝██║    ██╔══╝  ██║     ██║   ██║██║╚██╗██║██║   ██║██║╚██╔╝██║  ╚██╔╝  
██║     ██║  ██║███████╗██║ ╚═╝ ██║██║╚██████╔╝██║ ╚═╝ ██║    ███████╗╚██████╗╚██████╔╝██║ ╚████║╚██████╔╝██║ ╚═╝ ██║   ██║   
╚═╝     ╚═╝  ╚═╝╚══════╝╚═╝     ╚═╝╚═╝ ╚═════╝ ╚═╝     ╚═╝    ╚══════╝ ╚═════╝ ╚═════╝ ╚═╝  ╚═══╝ ╚═════╝ ╚═╝     ╚═╝   ╚═╝
    )" << endl;
}
else if (choice == 3) {
    cout << "Hello " << userName << "!" " Welcome to:" << endl;
    cout << endl; 
    cout << R"(
██████╗ ██╗   ██╗██╗███████╗███╗   ██╗███████╗███████╗███████╗     ██████╗██╗      █████╗ ███████╗███████╗
██╔══██╗██║   ██║██║██╔════╝████╗  ██║██╔════╝██╔════╝██╔════╝    ██╔════╝██║     ██╔══██╗██╔════╝██╔════╝
██████╔╝██║   ██║██║███████╗██╔██╗ ██║█████╗  ███████╗███████╗    ██║     ██║     ███████║███████╗███████╗
██╔══██╗██║   ██║██║╚════██║██║╚██╗██║██╔══╝  ╚════██║╚════██║    ██║     ██║     ██╔══██║╚════██║╚════██║
██████╔╝╚██████╔╝██║███████║██║ ╚████║███████╗███████║███████║    ╚██████╗███████╗██║  ██║███████║███████║
╚═════╝  ╚═════╝ ╚═╝╚══════╝╚═╝  ╚═══╝╚══════╝╚══════╝╚══════╝     ╚═════╝╚══════╝╚═╝  ╚═╝╚══════╝╚══════╝  
    )" << endl;
}
else if (choice == 4) {
   cout << "Hello " << userName << "!" " Welcome to:" << endl;
   cout << endl; 
   cout << R"(
███████╗██╗██████╗ ███████╗████████╗     ██████╗██╗      █████╗ ███████╗███████╗
██╔════╝██║██╔══██╗██╔════╝╚══██╔══╝    ██╔════╝██║     ██╔══██╗██╔════╝██╔════╝
█████╗  ██║██████╔╝███████╗   ██║       ██║     ██║     ███████║███████╗███████╗
██╔══╝  ██║██╔══██╗╚════██║   ██║       ██║     ██║     ██╔══██║╚════██║╚════██║
██║     ██║██║  ██║███████║   ██║       ╚██████╗███████╗██║  ██║███████║███████║
╚═╝     ╚═╝╚═╝  ╚═╝╚══════╝   ╚═╝        ╚═════╝╚══════╝╚═╝  ╚═╝╚══════╝╚══════╝   
    )" << endl;
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

cout << R"(
+=============================================================================================+
|  ___   ___    ___   _  __ ___  _  _   ___   ___  _   _  __  __  __  __    _    ___ __   __  |
| | _ ) / _ \  / _ \ | |/ /|_ _|| \| | / __| / __|| | | ||  \/  ||  \/  |  /_\  | _ \\ \ / /  |
| | _ \| (_) || (_) || ' <  | | | .` || (_ | \__ \| |_| || |\/| || |\/| | / _ \ |   / \ V /   |
| |___/ \___/  \___/ |_|\_\|___||_|\_| \___| |___/ \___/ |_|  |_||_|  |_|/_/ \_\|_|_\  |_|    |
+============================================================================================ +                                                                                     
)" << endl;

cout << "✈︎ Full Name: " << userName << endl;
cout << "✈︎ Reservation Code: 0009998762" << endl;

// booking class output
if (choice == 1) {
    cout << "✈︎ Booking Class: " << "ECONOMY CLASS" << endl;
}
else if (choice == 2) {
    cout << "✈︎ Booking Class: " << "PREMIUM ECONOMY" << endl;
}
else if (choice == 3) {
    cout << "✈︎ Booking Class: " << "BUISNESS CLASS" << endl;
}
else if (choice == 4) {
    cout << "✈︎ Booking Class: " << "FIRST CLASS" << endl;
}

// if statement loyalty membership
if (loyaltyMem == 1) {
    cout << "✈︎ Loyalty Membership: GOLD" << endl; 
}
else if (loyaltyMem == 2) {
    cout << "✈︎ Loyalty Membership: SILVER" << endl;
}
else if (loyaltyMem == 3) {
    cout << "✈︎ Loyalty Membership: BRONZE" << endl;
}
else if (loyaltyMem == 4) {
    cout << "✈︎ Loyalty Membership: NONE" << endl;
}

// if statement for date of travel
if (dateTravel == 1) {
    cout << "✈︎ Date of Travel: MONDAY 7:00AM (PEAK HOUR)" << endl;
}
else if (dateTravel == 2) {
    cout << "✈︎ Date of Travel: TUESDAY 9:30AM (PEAK HOUR)" << endl;
}
else if (dateTravel == 3) {
    cout << "✈︎ Date of Travel: WEDNESDAY 4:30PM (OFF-PEAK HOUR)" << endl;
}
else if (dateTravel == 4) {
    cout << "✈︎ Date of Travel: THURSDAY 7:00PM (OFF-PEAK HOUR)" << endl;
}

// if statement seat preference
if (seatPref == 1) {
    cout << "✈︎ Seat Preference: AISLE" << endl; 
}
else if (seatPref == 2) {
    cout << "✈︎ Seat Preference: WINDOW" << endl;
}
else if (seatPref == 3) {
    cout << "✈︎ Seat Preference: MIDDLE" << endl;
}
cout << endl;

// if statement for class
// economy class
// DISCOUNTS AND VOUCHERS

cout << R"(
+======================================================================================================================+
|   ___  ___  ___   ___  ___   _   _  _  _  _____     _    _  _  ___   __   __ ___   _   _   ___  _  _  ___  ___  ___  |
|  |   \|_ _|/ __| / __|/ _ \ | | | || \| ||_   _|   /_\  | \| ||   \  \ \ / // _ \ | | | | / __|| || || __|| _ \/ __| |
|  | |) || | \__ \| (__| (_) || |_| || .` |  | |    / _ \ | .` || |) |  \ V /| (_) || |_| || (__ | __ || _| |   /\__ \ |
|  |___/|___||___/ \___|\___/  \___/ |_|\_|  |_|   /_/ \_\|_|\_||___/    \_/  \___/  \___/  \___||_||_||___||_|_\|___/ |
+======================================================================================================================+
)" << endl;

// for first class

if (choice == 4 ) {
    cout << "✈︎ NO AVAILABLE DISCOUNTS AND VOUCHERS" << endl;
}
// Business Class: Free drink voucher for long-haul flights with aisle seat preference.

if (choice == 3) {
    if (durationFlight == 3 && seatPref == 1) {
        cout << "✈︎ DRINK VOUCHER" << endl;
    }
    else if (choice == 3) {
        cout << "✈︎ NO AVAILABLE DISCOUNTS AND VOUCHERS" << endl;
    }
}

// premium economy: Check for available discounts for next booking during peak period.
else if (choice == 2) {
    if (dateTravel == 1 || dateTravel == 2) {
        cout << "✈︎ CHECK FOR AVAILABLE DISCOUNTS FOR NEXT BOOKING DURING PEAK PERIOD" << endl;
    }
}

//Economy Class: 5% discount on in-flight meals for Bronze Loyalty Members.
else if (choice == 1) {
    if (loyaltyMem == 3) {
        cout << "✈︎ 5 PERCENT DISCOUNT ON IN-FLIGHT MEALS" << endl;
    }
    else if (choice == 1) {
        cout << "✈︎ NO AVAILABLE DISCOUNTS AND VOUCHERS" << endl;
    }
}
cout << endl;


// AMENITIES

cout << R"(
+=========================================================+
|     _    __  __  ___  _  _  ___  _____  ___  ___  ___   |
|    /_\  |  \/  || __|| \| ||_ _||_   _||_ _|| __|/ __|  |
|   / _ \ | |\/| || _| | .` | | |   | |   | | | _| \__ \  |
|  /_/ \_\|_|  |_||___||_|\_||___|  |_|  |___||___||___/  |
+=========================================================+
)" << endl;

//First Class: Complimentary in-flight Wi-Fi. Complimentary access to airport lounge for Gold Loyalty Members. Complimentary sleeping kit for window seat preferences on long-haul flights.

if (choice == 4) {
    cout << "✈︎ IN-FLIGHT WIFI" << endl;
    if (loyaltyMem == 1) {
        cout << "✈︎ ACCESS TO AIRPORT LOUNGE" << endl;
    }
    if (seatPref == 2 && durationFlight == 3) {
        cout << "✈︎ SLEEPING KIT" << endl;
    }
    if (mealPref == 3 || mealPref == 4) {
        cout << "✈︎ COMFIRMATION OF SPECIAL MEAL 48 HOURS BEFORE FLIGHT";
    }
}

// Business Class: Priority boarding for Silver or Gold Loyalty Members.

else if (choice == 3) {
    if (loyaltyMem == 1 || loyaltyMem == 2) {
        cout << "✈︎ PRIORITY BOARDING" << endl;
    }
}

// Premium Economy: Allocation of front-row seats for extra legroom.

else if (choice == 2) {
    if (specialReq == 2) {
        cout << "✈︎ ALLOCATION OF FRONT-ROW SEATS" << endl;
    }
}

// Flight Duration and Seat Preferences (Amenities):

if (durationFlight == 1) {
    if (mealPref == 1 || mealPref == 3) {
        cout << "✈︎ COMPLIMENTARY SNACK BOX" << endl;
    }
}

else if (durationFlight == 2) {
    if (seatPref == 2) {
        cout << "✈︎ IN-FLIGHT ENTERTAINMENT WITH A CHARGING PORT" << endl;
    }
}

else if (durationFlight == 3) {
    cout << "✈︎ BLANKETS AND HEADPHONES" << endl;
    if (seatPref == 3) {
        cout << "✈︎ COMPLIMENTARY NECK PILLOW" << endl;
    }
}

if (specialReq == 3) {
    cout << "✈︎ SEAT ALLOCATION AWAY FROM EMERGENCY EXITS" << endl;
}
else if (specialReq == 1) {
    cout << "✈︎ SEATS CLOSE TO THE ENTRANCE" << endl;
    cout << "✈︎ ASSISTANCE DURING BOARDING AND DE-BOARDING" << endl;
}
cout << endl;


return 0;

}
