class Daire {
    
    private:
        const double pi = 3.1415;

    public:
        double r;
        double alan () {
            return pi*r*r;
        }
        double cevre () {
            return 2*pi*r;
        }

};