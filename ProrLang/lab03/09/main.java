// Java: x == y == z ÍÅ ÊÎÌÏÈËÈĞÓÅÒÑß
// (x == y) äà¸ò boolean, êîòîğûé íåëüçÿ ñğàâíèòü ñ int

public class Task {
    public static void main(String[] args) {
        int x = 5, y = 5, z = 5;

        // İòà ñòğîêà âûçîâåò îøèáêó êîìïèëÿöèè:
        // boolean result = (x == y == z);

        // Ïğàâèëüíûé âàğèàíò — ÷åğåç &&:
        boolean result = (x == y) && (y == z);

        System.out.println("x = " + x + ", y = " + y + ", z = " + z);
        System.out.println("x == y == z -> " + result);
    }
}