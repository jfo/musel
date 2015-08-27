# line = r.map { |b| sprintf(" 0x%02X",b) }

r = File.read("c/440.wav").bytes
base16 =  r.map {|b| b.to_s(16) }
output =  r.map {|b| b.chr }.join

base16.map! do |e|
    if e.length == 1
        e = "0" + e
    else
        e =  e
    end
end

base16.join
File.open("rubyyy", 'w') { |file| file.write(base16.join) }

