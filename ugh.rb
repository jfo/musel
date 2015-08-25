
def makewaves(freq, sample_rate = 1000, duration = 3)
    output =[]

    number_of_samples = sample_rate * duration

    period = number_of_samples / freq

    number_of_samples.times do |i|
        output << 0
        output << 1
    end
    output

end

p makewaves(440)
