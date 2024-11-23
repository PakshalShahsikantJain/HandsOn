/*
    Author : Pakshal Jain
    Date : 12/12/2022
    Program : To Display Entered range in Reverse Order
*/

import scala.io.StdIn.*;

//Class Declaration with Constructor of Class
class RangeRev(No : Int,No2 : Int) {
    //Characteristics of Class
    var i : Int = 0;

    //Behaviour of Class
    def Display() : Unit = {
        println("Printing Numbers in Entered Range in Reverse Order");
        for(i <- this.No2 to this.No by -1) {
            print(i+"\t");
        }
    }
}

//Main object 
object Range {
    //Main Function
    def main(args : Array[String]) : Unit = {
        
        var No : Int = 0;
        var No2 : Int = 0;

        println("Jay ganesh...");

        //Taking Input From User
        println("Enter Starting Number");
        No = readInt();

        println("Enter Ending Number");
        No2 = readInt();

        //Handeling Condition if Entered Number is Negative or Starting Number is Greter Than Ending Number

        if((No < 0)||(No > No2))     
        {
            println("Invalid Range");
            return;
        }

        //Creating Object of RangeRev Class
        var robj = new RangeRev(No,No2);
        //Call To Behaviour of Class
        robj.Display();
    }
}