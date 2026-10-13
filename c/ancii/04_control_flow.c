#if 0
break;
continue;

if (condition) {
  /* do something */
} else if (condition) {
  /* do something */
} else {
  /* do something */
}

switch (a) {
case 0: // labels = integral *const* expressions (such as enums)
  <body>
  break;
  // if you don't break, control flow falls over labels
  // without a "break", execution continues until the
  // next "break" is reached.
case 1:
case 3:
  <body for case 1,3>
  break;
default:
  // if `some_integral_expression` didn't match any of the labels
  break;
}
#endif

#if 0 /* LOOPS */
/* for loop */
for (inilization; condition; updating) {
  /* do someting */
}

/* while loop */
inilization;
while (condition) {
  /* do someting */
  updating;
}

/* do while loop */
inilization;
do {
  /* do someting */
  updating;
} while (condition);
#endif

#if 0 // LABELS
/* goto, [avoid] used for jumping */
label:
  /* do something */

goto label;
#endif
