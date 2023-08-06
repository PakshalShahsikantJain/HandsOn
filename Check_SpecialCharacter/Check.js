/*
    Author : Pakshal Shashikant Jain
    Date : 05/08/2023
    Program : Accept Character from user and check whether it is special symbol
              or not (!, @, #, $, %, ^, &, *).

              Input : %
              Output : TRUE

              Input : d
              Output : FALSE
*/
//Function To Check Entered Character is Special Symbol or not
function Check(ch) {
    if ((ch >= '#') && (ch <= '&')) {
        return true;
    }
    else if ((ch == '!') || (ch == '@') || (ch == '^') || (ch == '*')) {
        return true;
    }
    else {
        return false;
    }
}
//////////////////////////////////////////////////////////////////////////////////////////////////
//Main function
function main() {
    var ch = 's';
    var bret = false;
    console.log("Jay Ganesh......");
    //Call To Check Function
    bret = Check(ch);
    //Handeling ouptut According To Given Conditions
    if (bret == true) {
        console.log("Entered Character %s is A Special Symbol", ch);
    }
    else {
        console.log("Entered Character %s is not a Special Symbols", ch);
    }
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Call To Main function
main();
