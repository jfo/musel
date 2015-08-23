def just_intonation(seed):
    notes = {}
    index = 0
    octaves = seed

    notes[index] = octaves
    notes[index + 1] = octaves * (25.0/24.0)
    notes[index + 2] = octaves * (9.0/8.0)
    notes[index + 3] = octaves * (6.0/5.0)
    notes[index + 4] = octaves * (5.0/4.0)
    notes[index + 5] = octaves * (4.0/3.0)
    notes[index + 6] = octaves * (45.0/32.0)
    notes[index + 7] = octaves * (3.0/2.0)
    notes[index + 8] = octaves * (8.0/5.0)
    notes[index + 9] = octaves * (5.0/3.0)
    notes[index + 10] = octaves * (9.0/5.0)
    notes[index + 11] = octaves * (15.0/8.0)
    notes[index + 12] = octaves * (2.0/1.0)

    return notes


def pythagorean(seed):
    notes = {}
    index =0
    octaves = seed

    notes[index] = octaves
    notes[index + 1] = octaves * (256.0/243.0)
    notes[index + 2] = octaves * (9.0/8.0)
    notes[index + 3] = octaves * (32.0/27.0)
    notes[index + 4] = octaves * (81.0/64.0)
    notes[index + 5] = octaves * (4.0/3.0)
    notes[index + 6] = octaves * (729.0/512.0)
    notes[index + 7] = octaves * (3.0/2.0)
    notes[index + 8] = octaves * (128.0/81.0)
    notes[index + 9] = octaves * (27.0/16.0)
    notes[index + 10] = octaves * (16.0/9.0)
    notes[index + 11] = octaves * (243.0/128.0)
    notes[index + 12] = octaves * 2.0

    return notes


def equal(seed):
    notes = {}
    index = 0
    octaves = seed

    notes[index] = octaves
    octaves *= (2.0**(1.0/12.0))
    notes[index + 1] = octaves
    octaves *= (2.0**(1.0/12.0))
    notes[index + 2] = octaves
    octaves *= (2.0**(1.0/12.0))
    notes[index + 3] = octaves
    octaves *= (2.0**(1.0/12.0))
    notes[index + 4] = octaves
    octaves *= (2.0**(1.0/12.0))
    notes[index + 5] = octaves
    octaves *= (2.0**(1.0/12.0))
    notes[index + 6] = octaves
    octaves *= (2.0**(1.0/12.0))
    notes[index + 7] = octaves
    octaves *= (2.0**(1.0/12.0))
    notes[index + 8] = octaves
    octaves *= (2.0**(1.0/12.0))
    notes[index + 9] = octaves
    octaves *= (2.0**(1.0/12.0))
    notes[index + 10] = octaves
    octaves *= (2.0**(1.0/12.0))
    notes[index + 11] = octaves
    octaves *= (2.0**(1.0/12.0))
    notes[index + 12] = octaves
    octaves *= (2.0**(1.0/12.0))

    return notes

print equal(440.0)
print just_intonation(440.0)
print pythagorean(440.0)
