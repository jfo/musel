#mutable state why why why persistent data has to exist in the context of a class instance / instance var why?req
require 'pry'

class Tuner
  attr_reader :notes

   def initialize(seed_freq = 440.0)
    @seed = seed_freq
    @notes = {}
    @notes[0] = seed_freq
  end

  def clear
    @notes = {}

  end

  def just_intonation
    index = 0
    octaves = @seed

#     until octaves < 20.0 do
#       octaves /= 2
#       index -= 12
#     end

    # until @notes[@notes.keys.sort.last] > 20000.0
      @notes[index] = octaves
      @notes[index + 1] = octaves * (25.0/24.0)
      @notes[index + 2] = octaves * (9.0/8.0)
      @notes[index + 3] = octaves * (6.0/5.0)
      @notes[index + 4] = octaves * (5.0/4.0)
      @notes[index + 5] = octaves * (4.0/3.0)
      @notes[index + 6] = octaves * (45.0/32.0)
      @notes[index + 7] = octaves * (3.0/2.0)
      @notes[index + 8] = octaves * (8.0/5.0)
      @notes[index + 9] = octaves * (5.0/3.0)
      @notes[index + 10] = octaves * (9.0/5.0)
      @notes[index + 11] = octaves * (15.0/8.0)
      @notes[index + 12] = octaves * (2.0/1.0)

      index = index + 12
      octaves *= 2
    # end
    @notes
  end


  def pythagorean
    index = 0
    octaves = @seed

    # until octaves < 20.0 do
    #   octaves /= 2
    #   index -= 12
    # end

    # until @notes[@notes.keys.sort.last] > 20000.0

      @notes[index] = octaves
      @notes[index + 1] = octaves * (256.0/243.0)
      @notes[index + 2] = octaves * (9.0/8.0)
      @notes[index + 3] = octaves * (32.0/27.0)
      @notes[index + 4] = octaves * (81.0/64.0)
      @notes[index + 5] = octaves * (4.0/3.0)
      @notes[index + 6] = octaves * (729.0/512.0)
      @notes[index + 7] = octaves * (3.0/2.0)
      @notes[index + 8] = octaves * (128.0/81.0)
      @notes[index + 9] = octaves * (27.0/16.0)
      @notes[index + 10] = octaves * (16.0/9.0)
      @notes[index + 11] = octaves * (243.0/128.0)
      @notes[index + 12] = octaves * 2.0

      # index += 12
      # octaves *= 2
    # end

    @notes
  end

  def equal
    index = 0
    octaves = @seed

    # until octaves < 20.0 do
    #   octaves /= 2
    #   index -= 12
    # end

    # until @notes[@notes.keys.sort.last] > 20000.0

      @notes[index] = octaves
      @notes[index + 1] = octaves *= (2.0**(1.0/12.0))
      @notes[index + 2] = octaves *= (2.0**(1.0/12.0))
      @notes[index + 3] = octaves *= (2.0**(1.0/12.0))
      @notes[index + 4] = octaves *= (2.0**(1.0/12.0))
      @notes[index + 5] = octaves *= (2.0**(1.0/12.0))
      @notes[index + 6] = octaves *= (2.0**(1.0/12.0))
      @notes[index + 7] = octaves *= (2.0**(1.0/12.0))
      @notes[index + 8] = octaves *= (2.0**(1.0/12.0))
      @notes[index + 9] = octaves *= (2.0**(1.0/12.0))
      @notes[index + 10] = octaves *= (2.0**(1.0/12.0))
      @notes[index + 11] = octaves *= (2.0**(1.0/12.0))
      @notes[index + 12] = octaves *= (2.0**(1.0/12.0))
      # index += 12
      # octaves *= 2
    # end
    @notes
  end
end

x = Tuner.new()
binding.pry

