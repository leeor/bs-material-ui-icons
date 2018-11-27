open Icon;

module Filled = Make({
  [@bs.module "@material-ui/icons/BrightnessMedium"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Outlined = Make({
  [@bs.module "@material-ui/icons/BrightnessMediumOutlined"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Rounded = Make({
  [@bs.module "@material-ui/icons/BrightnessMediumRounded"]
  external reactClass: ReasonReact.reactClass = "default";
});

module Sharp = Make({
  [@bs.module "@material-ui/icons/BrightnessMediumSharp"]
  external reactClass: ReasonReact.reactClass = "default";
});

module TwoTone = Make({
  [@bs.module "@material-ui/icons/BrightnessMediumTwoTone"]
  external reactClass: ReasonReact.reactClass = "default";
});
