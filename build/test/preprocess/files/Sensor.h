typedef struct SensorVtbl SensorVtbl;

typedef struct Sensor Sensor;



struct Sensor

{

    const SensorVtbl *vptr;

    const char *type;

    int id;

    int value;

};



struct SensorVtbl

{

    int (*get)(Sensor *const me);

};







int Sensor_get(Sensor *const me);
