/*
    Author : Pakshal Shashikant Jain
    Date : 18/09/2023
    Program : Accept sing from user and reverse the contents of that string by
              toggling the case.

              Input : "aCBdef"
              Output : "FEDcbA"
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Class Declaration
var StringRevTog = /** @class */ (function () {
    //Constructor of Class
    function StringRevTog() {
        this.str = " ";
        this.arr = [];
    }
    //Behaviour of Class To Take Input from user
    StringRevTog.prototype.Accept = function () {
        this.str = "Pakshal Jain";
        this.arr = Array.from(this.str);
    };
    //Behaviour of Class To Reverse String after Toggling Case
    StringRevTog.prototype.StrRevTogX = function () {
        var ascii = 0;
        var first = 0;
        var last = 0;
        var temp = ' ';
        while (last != this.arr.length) {
            last++;
        }
        last--;
        while (first <= last) {
            if ((this.arr[first] >= 'A') && (this.arr[first] <= 'Z')) {
                ascii = this.arr[first].charCodeAt() + 32;
                this.arr[first] = String.fromCharCode(ascii);
            }
            else if ((this.arr[first] >= 'a') && (this.arr[first] <= 'z')) {
                ascii = this.arr[first].charCodeAt() - 32;
                this.arr[first] = String.fromCharCode(ascii);
            }
            if (last != first) {
                if ((this.arr[last] >= 'A') && (this.arr[last] <= 'Z')) {
                    ascii = this.arr[last].charCodeAt() + 32;
                    this.arr[last] = String.fromCharCode(ascii);
                }
                else if ((this.arr[last] >= 'a') && (this.arr[last] <= 'z')) {
                    ascii = this.arr[last].charCodeAt() - 32;
                    this.arr[last] = String.fromCharCode(ascii);
                }
            }
            temp = this.arr[first];
            this.arr[first] = this.arr[last];
            this.arr[last] = temp;
            first++;
            last--;
        }
    };
    return StringRevTog;
}()); //End of Class
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main Function
function main() {
    console.log("Jay ganesh....");
    //Creating object of StringRevTog Class
    var sobj = new StringRevTog();
    //Call To Behaviours of Class
    sobj.Accept();
    sobj.StrRevTogX();
    //Printing Reversed String
    console.log("Reversed String is :", sobj.arr.join(''));
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Call To Main Function
main();
