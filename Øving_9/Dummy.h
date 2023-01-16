class Dummy{
    private:

    public:
        int *num;
        Dummy() {
            num=new int{0};
        }
        ~Dummy(){
            delete num;
        }

        Dummy(const Dummy &d);
        Dummy &operator=(Dummy u);
};

void DummyTest();