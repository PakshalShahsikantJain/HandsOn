/*
    Author : Pakshal Jain
    Date : 15/12/2022
    Program : To Convert Entered Money From Dollar To Inr
*/

//Required Libraries
import scala.io.StdIn.*;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration with parameterised Constrcutor of Class
class Conversion(var No : Int) {
    //Characteristics of Class
    var ans : Int = 0;

    //Behaviour of Class
    def DollarToInr() : Int = {

        //Handling Condition if Entered Number is Negative
        if(this.No < 0) {
            this.No = -this.No;
        }

        //Logic
        ans = this.No * 70;

        return ans;
    }
}//End of Class

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Object
object Convert {
    //Main Function
    def main(args : Array[String]) : Unit = {
        var No : Int = 0;
        var iret : Int = 0;

        println("Jay Ganesh...");

        //Taking Input From User
        println("Enter Money in Dollar");
        No = readInt();

        //Creating object of Conversion Class
        var cobj = new Conversion(No);
        //Call To Behaviour of Class
        iret = cobj.DollarToInr();

        //Printing Obtained Output
        println("Money After Converting From Dollar to Inr is : "+iret);
    }
}