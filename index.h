static const char MAIN_PAGE[] PROGMEM = R"=====(

<!DOCTYPE html>
<html lang="id">

<head>
  <meta charset="UTF-8" />
  <meta name="viewport" content="width=device-width, initial-scale=1.0" />
  <link rel="stylesheet" href="style.css" />
  <title>Saklar Lampu</title>
  <style>
    body {
      font-family: Arial, sans-serif;
      background-color: #f4f4f4;
      display: flex;
      flex-direction: column;
      align-items: center;
      justify-content: center;
      height: 100vh;
      margin: 0;
    }

    h1 {
      color: #333;
    }

    h3 {
      color: #555;
    }

    button {
      background-color: #4CAF50; /* Hijau */
      border: none;
      color: white;
      padding: 15px 32px;
      text-align: center;
      text-decoration: none;
      display: inline-block;
      font-size: 16px;
      margin: 10px;
      cursor: pointer;
      border-radius: 5px;
      transition: background-color 0.3s;
    }

    button:hover {
      background-color: #45a049; /* Warna hijau lebih gelap saat hover */
    }

    .container {
      text-align: center;
      background-color: white;
      padding: 20px;
      border-radius: 10px;
      box-shadow: 0 4px 8px rgba(0, 0, 0, 0.2);
    }
  </style>
</head>

<body>
  <div class="container">
    <h1>Saklar Lampu</h1>
    <h3>Nyalakan atau Matikan Lampu</h3>
    <a href="/on"><button>ON</button></a>
    <a href="/off"><button>OFF</button></a>
    <h3>Nyalakan atau Matikan Dinamo</h3>
    <a href="/dinamo.on"><button>ON</button></a>
    <a href="/dinamo.off"><button>OFF</button></a>
  </div>

  <script>
    // Anda dapat menambahkan skrip JavaScript di sini jika diperlukan
  </script>
</body>

</html>



)=====";
