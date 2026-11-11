class RoboticArm{
    private:
        double x, y, z;
        bool gripperOK;

    public:
        //Constructor
        RoboticArm(double = 0, double = 0, double = 0, bool = false);

        //Metodos consultores
        double getCoorX();
        double getCoorY();
        double getCoorZ();
        bool getGripperStatus();

        //Metodos de uso
        void grab();
        void release();
        void move(double, double, double);
};
