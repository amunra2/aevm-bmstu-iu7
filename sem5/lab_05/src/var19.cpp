// Без изменений
extern "C" {
    void var019(int* c, const int* a, const int* b, const int len) 
    {
        int tmpA;
        int tmpB;
        int tmpC;

        for(int i = 0; i < len; i++)
        {
            tmpA = a[i];
            tmpB = b[i];

            for (int j = 0; j < 8; j++)
            {
                tmpA = a[i] & 0x7;
                tmpB = b[i] & 0x7;
                tmpC = (tmpA + tmpB) & 0x7;
                
                tmpA = tmpA>>4;
                tmpB = tmpB>>4;
                tmpC = tmpA<<4;
            }

            c[i] = tmpC;
        }
    }
}


// Конвейрная - #pragma HLS PIPELINE
extern "C" {
    void var019_pipelined(int* c, const int* a, const int* b, const int len) 
    {
        #pragma HLS PIPELINE

        int tmpA;
        int tmpB;
        int tmpC;

        for(int i = 0; i < len; i++)
        {
            tmpA = a[i];
            tmpB = b[i];

            for (int j = 0; j < 8; j++)
            {
                tmpA = a[i] & 0x7;
                tmpB = b[i] & 0x7;
                tmpC = (tmpA + tmpB) & 0x7;
                
                tmpA = tmpA>>4;
                tmpB = tmpB>>4;
                tmpC = tmpA<<4;
            }

            c[i] = tmpC;
        }
    }
}


// Частично развернутый цикл - #pragma HLS UNROLL
extern "C" {
    void var019_unrolled(int* c, const int* a, const int* b, const int len) 
    {
        #pragma HLS UNROLL

        int tmpA;
        int tmpB;
        int tmpC;

        for(int i = 0; i < len; i++)
        {
            tmpA = a[i];
            tmpB = b[i];

            for (int j = 0; j < 8; j++)
            {
                tmpA = a[i] & 0x7;
                tmpB = b[i] & 0x7;
                tmpC = (tmpA + tmpB) & 0x7;
                
                tmpA = tmpA>>4;
                tmpB = tmpB>>4;
                tmpC = tmpA<<4;
            }

            c[i] = tmpC;
        }
    }
}


// Конвейрный с частично развернутым циклом - #pragma HLS DATAFLOW
extern "C" {
    void var019_pipe_unroll(int* c, const int* a, const int* b, const int len) 
    {
        #pragma HLS DATAFLOW

        int tmpA;
        int tmpB;
        int tmpC;

        for(int i = 0; i < len; i++)
        {
            tmpA = a[i];
            tmpB = b[i];

            for (int j = 0; j < 8; j++)
            {
                tmpA = a[i] & 0x7;
                tmpB = b[i] & 0x7;
                tmpC = (tmpA + tmpB) & 0x7;
                
                tmpA = tmpA>>4;
                tmpB = tmpB>>4;
                tmpC = tmpA<<4;
            }

            c[i] = tmpC;
        }
    }
}