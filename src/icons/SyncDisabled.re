open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/SyncDisabled"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/SyncDisabledOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/SyncDisabledRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/SyncDisabledSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/SyncDisabledTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
