public class Student {
    public final static String college = "Berea College"
    private String lastName;
    private String firstName;
    private int age;
    private String major;
    
    public Student(){
        lastName = "Last Name";
        this.lastName = "First Name";
        this.age = 20;
        this.major = "CIS";
    
    public Student(String fn,String ln, int age, String major){
        lastName = fn;
        this.lastName = ln;
        this.age = age;
        this.major = major;
    
    }
    public String toString(){
        return "Name:" + this.firstName +" " +this.lastName+ " Age: " + this.age + " Major: " + this.major;
    }
}