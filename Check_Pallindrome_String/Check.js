/*
    Author : Pakshal Shashikant Jain
    Date : 21/09/2023
    Program : Accept string from user and check whether the string is palindrome
              or not without considering its case.

              Input : "1abccBA1"
              Output : TRUE
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Class Declaration
var StringPallindrome = /** @class */ (function () {
    //Constructor of Class
    function StringPallindrome() {
        this.str = " ";
        this.arr = [];
    }
    //Behaviour of Class To Take Input from user
    StringPallindrome.prototype.Accept = function () {
        this.str = "Pakshal";
        this.arr = Array.from(this.str);
    };
    //Behaviour of Class To Check String is Pallindrom or Not
    StringPallindrome.prototype.StrPallindrome = function () {
        var first = 0;
        var last = 0;
        var ascii = 0;
        if (this.str == null) {
            return false;
        }
        while (last != this.arr.length) {
            last++;
        }
        last--;
        //Logic To Check
        while (first <= last) {
            if ((this.arr[first] >= 'A') && (this.arr[first] <= 'Z')) {
                ascii = this.arr[first].charCodeAt() + 32;
                this.arr[first] = String.fromCharCode(ascii);
            }
            if (first != last) {
                if ((this.arr[last] >= 'A') && (this.arr[last] <= 'Z')) {
                    ascii = this.arr[last].charCodeAt() + 32;
                    this.arr[last] = String.fromCharCode(ascii);
                }
            }
            if (this.arr[first] != this.arr[last]) {
                break;
            }
            first++;
            last--;
        }
        if (this.arr[first] != this.arr[last]) {
            return false;
        }
        else {
            return true;
        }
    };
    return StringPallindrome;
}()); //End of Class
////////////////////////////////////////////////////////////////////////////////////////////
//Main function
function main() {
    var bret = false;
    console.log("Jay Ganesh......");
    //Creating object of StringPallindrome Class
    var sobj = new StringPallindrome();
    //Call To Behaviours of Class
    sobj.Accept();
    bret = sobj.StrPallindrome();
    //Handeling Condition if bret is True
    if (bret == true) {
        console.log("String is Pallindrome");
    }
    else {
        console.log("String is Not Pallindrome");
    }
}
//////////////////////////////////////////////////////////////////////////////////////////////////////
//Call To Main Function
main();
