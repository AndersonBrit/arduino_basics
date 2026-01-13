## 📄 README — Teste do Sensor Piezo com Display OLED

### 📌 Descrição

Este teste tem como objetivo verificar o correto funcionamento do **sensor piezoelétrico** ligado a um **ESP32**, bem como a apresentação dos valores lidos num **display OLED SSD1306 (128x64)** e no **Monitor Serial**.

O código foi desenvolvido apenas para **teste e validação**, não fazendo parte diretamente do código final do projeto da PAP.

---

### 🎯 Objetivos do teste

* Confirmar a leitura de valores analógicos do sensor piezo
* Validar a comunicação I2C com o display OLED SSD1306
* Visualizar em tempo real os valores do piezo no display
* Comparar os valores apresentados no display com o Monitor Serial

---

### 🧰 Componentes utilizados

* ESP32
* Sensor piezoelétrico
* Display OLED SSD1306 (128x64, I2C)
* Cabos de ligação


---

### 🔌 Ligações principais

* **Piezo** → GPIO 34 (entrada analógica)
* **OLED SDA** → GPIO 21
* **OLED SCL** → GPIO 22
* **OLED Address** → `0x3C`

---

### 🖥 Funcionamento

1. O ESP32 inicia a comunicação I2C com o display OLED
2. É apresentada a mensagem **“Teste Piezo”** no arranque
3. O valor analógico do sensor piezo é lido continuamente
4. O valor é:

   * Mostrado no display OLED
   * Enviado para o Monitor Serial
5. A leitura é atualizada a cada **100 ms**

---

### 📷 Evidências

As imagens, GIFs ou capturas do Monitor Serial deste teste devem ser colocadas na pasta:

```text
media/
```

---

### 📝 Notas

Este teste serviu para compreender o comportamento do sensor piezo antes da sua integração no projeto principal da PAP.  
O código final do projeto poderá utilizar lógica adicional, como filtragem de sinal ou thresholds.
