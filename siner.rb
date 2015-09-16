p Math::sin(3.1415 * 1).to_f

out = []
(1..44100).each do |x|
    system "clear"
   p (Math::sin(
       Math::PI *  x ))
    sleep 0.4
end


