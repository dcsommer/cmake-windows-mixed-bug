typedef struct {
    const void* data;
    unsigned size;
} span_t;

typedef struct {
    void* data;
    unsigned size;
} mut_span_t;

#define AS_NON_MUT(x) \
  _Generic((x), mut_span_t : (span_t){x.data, x.size}, default : (x))

int main() {
    mut_span_t mut_v = {0};
    span_t non_mut_v = {0};

    return AS_NON_MUT(mut_v).size == non_mut_v.size;
}
