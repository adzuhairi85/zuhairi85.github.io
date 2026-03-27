body {
  margin:0;
  font-family:Arial;
  background:#000;
  color:#fff;
}

/* NAV */
nav {
  display:flex;
  justify-content:space-between;
  padding:15px 20px;
  background:#111;
}
nav a {
  color:#fff;
  margin-left:15px;
  text-decoration:none;
}

/* HERO */
.hero {
  position:relative;
}
.hero img {
  width:100%;
  height:300px;
  object-fit:cover;
  opacity:0.6;
}
.hero-text {
  position:absolute;
  top:50%;
  left:50%;
  transform:translate(-50%,-50%);
  text-align:center;
}
.btn {
  background:yellow;
  color:black;
  padding:12px 20px;
  text-decoration:none;
  display:inline-block;
  margin-top:10px;
}

/* BADGES */
.badges {
  display:flex;
  justify-content:center;
  gap:20px;
  padding:20px;
}
.badges div {
  background:#222;
  padding:10px 20px;
}

/* CARDS */
.card {
  background:#111;
  margin:10px;
  padding:20px;
  border-left:4px solid yellow;
}

/* FLOAT BUTTON */
.float {
  position:fixed;
  bottom:20px;
  padding:15px;
  border-radius:50%;
  color:#fff;
  font-size:20px;
}
.whatsapp {
  left:20px;
  background:green;
}
.call {
  right:20px;
  background:red;
}
