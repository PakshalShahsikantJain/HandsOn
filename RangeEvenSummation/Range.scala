/*
    Author : Pakshal Jain
    Date : 11/12/2022
    Program : To Calculate Summation of Even Numbers in Entered Range
*/

//Required Libraries
import scala.io.StdIn.*

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration with Constructor of Class
class Summation(No : Int,No2 : Int)  {

    //Behaviour of Class
    def Calculate() : Int = {
        var i : Int = 0;
        var Sum : Int = 0;

        //logic
        for(i <- this.No to this.No2) {
            if(i % 2 == 0) {
                Sum = Sum + i;
            }
        }

        return Sum;
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Object
object Range {
    //Main Function
    def main(args : Array[String]) : Unit = {
        var No : Int = 0;
        var No2 : Int = 0;
        var iret : Int = 0;

        println("Jay ganesh...");

        //Taking Input From User
        println("Enter Starting Number");
        No = readInt();
        
        println("Enter Ending Number");
        No2 = readInt();

        //Handeling Condition if Entered Number is Negative or Starting Number is Greater Than Ending Number
        if((No < 0)||(No > No2)) {
            println("Invalid Range");
            return;
        }

        //Creating object of Summation Class
        var sobj = new Summation(No,No2);
        //Call To Behaviour of Class
        iret = sobj.Calculate();

        //Printing obtained Output 
        println("Summation of Even Numbers in Entered range is : "+iret);
    }
}