import numpy

# size_of_ptr = 0x19A8
# param_pointer = numpy.empty(size_of_ptr, dtype=object)

# index = 
# param_pointer[10]    = 0x0
# param_pointer[0xb]   = 0x0
# param_pointer[8]     = 0x0
# param_pointer[9]     = 0x0
# param_pointer[6]     = 0x0
# param_pointer[7]     = 0x0
# param_pointer[4]     = 0x0
# param_pointer[5]     = 0x0
# param_pointer[2]     = 0x0
# param_pointer[3]     = 0x0
# param_pointer[0]     = 0x0
# param_pointer[1]     = 0x0

# print(param_pointer)

counter = -0x1490
increment = 0x70
count = 0

counter += increment
count += 1
while counter != 0:
    print(hex(counter))
    counter += increment
    count += 1
print(count * 2)

tmp = [
    0x14f8,
    0x1508,
    0x1500,
    0x1520,
    0x1518,
    0x1510,
]

for x in tmp:
    print("%s" % hex(x + counter))