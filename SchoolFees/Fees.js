"use strict";
exports.__esModule = true;
var process_1 = require("process");
function SchoolFee(No) {
    var fee = 0;
    switch (No) {
        case 1: {
            fee = 8900;
            return fee;
        }
        case 2: {
            fee = 12790;
            return fee;
        }
        case 3: {
            fee = 21000;
            return fee;
        }
        case 4: {
            fee = 23450;
            return fee;
        }
        default: {
            console.log("Invalid Input");
            (0, process_1.exit)(0);
        }
    }
}
function main() {
    var No = 1;
    var iret = 0;
    console.log("Jay Ganesh.....");
    iret = SchoolFee(No);
    console.log("Your Fees is : %d", iret);
}
main();
