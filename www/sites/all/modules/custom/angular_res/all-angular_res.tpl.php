<div id="angular_res-app" ng-controller="angular_resController">
Hello worlds {{1+3}}<br>
{{foobar}}<br>

  <div class="angular_res" ng-repeat="resv in angular_res">
    <h2>{{resv.node.title}}</h2>
    <div class="body">
      {{resv.node.Body}}
    </div>
  </div>

</div>
