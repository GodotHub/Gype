
import { Tweener } from "@godot/classes/tweener";


export declare class PropertyTweener extends Tweener{
  public from(_value: any): PropertyTweener;
  public from_current(): PropertyTweener;
  public as_relative(): PropertyTweener;
  public set_trans(_trans: number): PropertyTweener;
  public set_ease(_ease: number): PropertyTweener;
  public set_custom_interpolator(_interpolator_method: Callable): PropertyTweener;
  public set_delay(_delay: number): PropertyTweener;
}