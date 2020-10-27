Matas Gaulia <br/>
Vilniaus Universitetas <br/>
Obektinio programavimo pratybos


V0.2 Pridėta nuskaitymo iš .txt failo galimybe<br/>
V0.2 Pridėtas rūšiavimas rezultatuose pagal vardus<br/>
V0.2 Pridėtas lygiavimas rezultatų spausdinime

V0.3 Funkcijos ir struktūros iškeltos į atskirą failą
V0.3 Kur prasminga, pridėta "klaidų gaudymas" su try/catch metodu.

V0.4 Sukurta programos spartos analizė

V0.5 Sukurtas programos spartos lyginimas naudojant std::list ir std::vector
Rezultatas: <br>
Failo nuskaitymas:
<table>
<thead>
  <tr>
    <th>Failo dydis</th>
    <th>STRUCT</th>
    <th>LIST</th>
  </tr>
</thead>
<tbody>
  <tr>
    <td>1000</td>
    <td>0.005</td>
    <td>0.007</td>
  </tr>
  <tr>
    <td>10000</td>
    <td>0.036</td>
    <td>0.034</td>
  </tr>
  <tr>
    <td>100000</td>
    <td>0.39</td>
    <td>0.326</td>
  </tr>
  <tr>
    <td>1000000</td>
    <td>3.349</td>
    <td>3.253</td>
  </tr>
  <tr>
    <td>10000000</td>
    <td>33.504</td>
    <td>32.185</td>
  </tr>
</tbody>
</table>

Failo dalijimas:
<table>
<thead>
  <tr>
    <th>Failo dydis</th>
    <th>STRUCT</th>
    <th>LIST</th>
  </tr>
</thead>
<tbody>
  <tr>
    <td>1000</td>
    <td>0.001</td>
    <td>0.001</td>
  </tr>
  <tr>
    <td>10000</td>
    <td>0.007</td>
    <td>0.006</td>
  </tr>
  <tr>
    <td>100000</td>
    <td>0.0078</td>
    <td>0.061</td>
  </tr>
  <tr>
    <td>1000000</td>
    <td>0.729</td>
    <td>0.62</td>
  </tr>
  <tr>
    <td>10000000</td>
    <td>7.11</td>
    <td>6.026</td>
  </tr>
</tbody>
</table>
