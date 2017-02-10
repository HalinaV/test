(setq c-default-style "bsd"
      c-basic-offset 8
      tab-width 8
      indent-tabs-mode t)
(require 'whitespace)
(setq whitespace-style '(face empty lines-tail trailing))
(global-whitespace-mode t)
(setq column-number-mode t)

;;add line numbers to each line
(global-linum-mode)

;;format line numbers to have 3 spaces for numbers, then this: ' | '
(setq linum-format "%3d \u2502 ")
