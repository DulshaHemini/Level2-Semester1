public class MyShape {

    public double getMyShapeVolume(double radius, double height) {

        double sphereVolume =
                (4.0 / 3.0) * Math.PI * radius * radius * radius;

        double coneVolume =
                (1.0 / 3.0) * Math.PI * radius * radius * height;

        return sphereVolume + coneVolume;
    }
}